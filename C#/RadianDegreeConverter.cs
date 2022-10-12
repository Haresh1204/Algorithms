using System;

namespace Conversions
{
    public static class RadianDegreeConverter
    {
        /// <summary>
        /// Converts given degree to radian
        /// </summary>
        /// <param name="degree"></param>
        /// <returns></returns>
        public static double DegreeToRadian(double degree)
        {
            return degree * (Math.PI / 180);
        }

        /// <summary>
        /// Converts given radian to degree
        /// </summary>
        /// <returns></returns>
        public static double RadianToDegree(double radian)
        {
            return radian * (180 / Math.PI);
        }
    }
}