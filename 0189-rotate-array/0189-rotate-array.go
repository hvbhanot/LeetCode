func rotate(nums []int, k int)  {
 n := len(nums)

 k = k % n
 if k == 0{
    return
 }

 mid := n - k

 end := nums[mid:]
 start := nums[:mid]

 result := append(end, start...)

 copy(nums, result)
}