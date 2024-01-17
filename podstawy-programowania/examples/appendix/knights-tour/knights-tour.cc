#include <cassert>
#include <cstddef>
#include <fstream>
#include <iomanip>
#include <vector>

class knight_tour_problem
{
  using row_t = std::vector<int>;
  using chessboard_t = std::vector<row_t>;
  using solutions_t = std::vector<chessboard_t>;

public:
  explicit knight_tour_problem(int size)
    : size_{ size }
  {
  }

  bool solved() const { return solved_; }

  knight_tour_problem& find_all_solutions()
  {
    if (!solved_) {
      search(1, 0, 0);
      solved_ = true;
    }
    return *this;
  }

  std::ostream& print_all_solutions(std::ostream& os) const
  {
    assert(solved());
    if (!solutions_.size()) {
      os << "\nBrak rozwiazan\n";
    } else {
      for (std::size_t i = 0; i < solutions_.size(); ++i) {
        print_solution(os << '\n', i);
      }
    }
    return os << std::flush;
  }

private:
  // Rekurencyjne rozwiązanie problemu skoczka szachowego.
  void search(int move, int i, int j) const
  {
    const int nd = 8;
    const int delta_i[nd] = { -2, -2, -1, -1, +1, +1, +2, +2 };
    const int delta_j[nd] = { -1, +1, -2, +2, -2, +2, -1, +1 };

    board_[i][j] = move;
    if (is_solution()) {
      solutions_.push_back(board_);
    } else {
      for (int k = 0; k < nd; ++k)
        if (is_on_board(i + delta_i[k], j + delta_j[k]) &&
            !was_visited(i + delta_i[k], j + delta_j[k]))
          search(move + 1, i + delta_i[k], j + delta_j[k]);
    }
    board_[i][j] = 0; // Zastosowanie techniki wycofywania (ang. backtracking).
    return;
  }

  bool is_solution() const
  {
    for (int i = 0; i < size_; i++)
      for (int j = 0; j < size_; j++)
        if (!board_[i][j])
          return false;
    return true;
  }

  std::ostream& print_solution(std::ostream& os, std::size_t number) const
  {
    auto& board = solutions_[number];
    os << "Rozwiazanie #" << number + 1;
    for (int i = 0; i < size_; i++) {
      os << '\n';
      for (int j = 0; j < size_; j++) {
        os << std::setw(2) << board[i][j] << ' ';
      }
    }
    return os << '\n';
  }

  bool is_on_board(int pos_i, int pos_j) const
  {
    return pos_i >= 0 && pos_i < size_ && pos_j >= 0 && pos_j < size_;
  }

  bool was_visited(int i, int j) const { return board_[i][j] > 0; }

private:
  int size_;
  mutable chessboard_t board_ = { static_cast<std::size_t>(size_),
                                  row_t(static_cast<std::size_t>(size_), 0) };
  mutable solutions_t solutions_ = {};
  bool solved_ = false;
};

std::ostream&
operator<<(std::ostream& os, const knight_tour_problem& rhs)
{
  rhs.print_all_solutions(os);
  return os;
}

int
main()
{
  std::ofstream file{ "solutions.txt" };
  for (int i = 1; i < 6; ++i) {
    file << "> Szachownica " << i << " x " << i << std::endl
         << knight_tour_problem{ i }.find_all_solutions() << std::endl;
  }
}
