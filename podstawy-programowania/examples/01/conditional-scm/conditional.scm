(define true (lambda (x y) (x)))
(define false (lambda (x y) (y)))
(define if_then_else (lambda (a b c) (a b c)))

(define f0 (lambda () (write 'f0)))
(define f1 (lambda () (write 'f1)))

(if_then_else false f0 f1)
(newline)
(exit)
