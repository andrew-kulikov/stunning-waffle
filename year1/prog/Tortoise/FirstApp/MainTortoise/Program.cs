using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Microsoft.SmallBasic.Library;

namespace MainTortoise {
    class Program {
        private static void GraphicsWindow_KeyDown() {
            if (GraphicsWindow.LastKey == "Up") {
                Turtle.Angle = 0;
            }
            else if (GraphicsWindow.LastKey == "Down") {
                Turtle.Angle = 180;
            }
            else if (GraphicsWindow.LastKey == "Right") {
                Turtle.Angle = 90;
            }
            else if(GraphicsWindow.LastKey == "Left") {
                Turtle.Angle = -90;
            }
        }
        static void Main(string[] args) {
            GraphicsWindow.KeyDown += GraphicsWindow_KeyDown;
            Turtle.PenUp();
            GraphicsWindow.BrushColor = "#3CF665";
            var eat = Shapes.AddRectangle(20, 20);
            Random rand = new Random();
            int eatX = rand.Next() % 600;
            int eatY = rand.Next() % 420;
            Shapes.Move(eat, eatX, eatY);            
            for (;;) {
                if (Turtle.X >= eatX && Turtle.X <= eatX + 20 && Turtle.Y >= eatY
                && Turtle.Y <= eatY + 20) {
                    Random rand1 = new Random();
                    eatX = rand1.Next() % 600;
                    eatY = rand1.Next() % 420;
                    Shapes.Move(eat, eatX, eatY);
                    Turtle.Speed += 1;
                }
                Turtle.Move(10);
                if (Turtle.X < 0) {
                    Turtle.X = 600;
                }
                if (Turtle.Y < 0) {
                    Turtle.Y = 420;
                }
                if (Turtle.X > 600) {
                    Turtle.X = 0;
                }
                if (Turtle.Y > 420) {
                    Turtle.Y = 0;
                }
            }
            
        }
    }
}
