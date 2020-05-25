struct A end
struct B end

function say(a1::A, a2::A)
    println("aa")
end

function say(a::A, b::B)
    println("ab")
end

function say(b::B, a::A)
    println("ba")
end

function say(b1::B, b2::B)
    println("bb")
end

# function say(a, b)
#     println("?")
# end

# function say_swaps(x::Union{A, B}, y::Union{A, B})
# function say_swaps(x::Any, y::Any)
function say_swaps(x, y)
    say(x, y)
    say(y, x)
end

function main()
    a = A()
    b = B()
    say(a, b)
    # say(a, b=B())
    # say_swaps(a, b)
    # say_swaps(b, a)
    # say_swaps(a, 2)
end

main()
