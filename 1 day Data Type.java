/*
https://www.codingninjas.com/studio/problems/data-type_9065109?challengeSlug=ninja-slayground&leftPanelTab=0
*/




public class Solution 
{
    public static int dataTypes(String type) 
    {
     
        String a=new String();
        a=type;
        if (type.equals("Integer")||type.equals("Float"))
            return(4);
        else if(type.equals("Long")||type.equals("Double"))
            return(8);
        else
            return(1);
    }
}