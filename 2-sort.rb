result = []

ARGV.each do |arg|
    # Skip if not an integer
    next unless arg.match?(/^\d+$/)

    # Convert to integer
    i_arg = arg.to_i

    # Insert result at the right position
    is_inserted = false
    i = 0

    result.each_with_index do |num, index|
        if num >= i_arg
            result.insert(index, i_arg)
            is_inserted = true
            break
        end
    end

    result << i_arg unless is_inserted
end

puts result
