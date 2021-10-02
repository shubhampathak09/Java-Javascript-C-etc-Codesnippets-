module Factorial where

factorial :: Integer -> Integer
factorial a = if a > 0 then a * factorial(a-1) else 1