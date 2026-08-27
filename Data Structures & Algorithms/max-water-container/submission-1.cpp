class Solution {
public:
    int maxArea(vector<int>& heights) {
        int area=0,height,width,a;
        int l=0;
        int r=heights.size()-1;
        while(l<r){
            if(heights[l]<heights[r]){
        height=min(heights[l],heights[r]);
         width=r-l;
         a=height*width;
        area=max(area,a);
        l++;
        }else{
             height=min(heights[l],heights[r]);
         width=r-l;
         a=height*width;
        area=max(area,a);
            r--;

        }
        }
        return area;
    }
};
