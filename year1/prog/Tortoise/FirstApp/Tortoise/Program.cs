using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Microsoft.SmallBasic.Library;

namespace Tortoise {
    class Program {
        static void WriteT(int x, int y) {
            Turtle.X = x;
            Turtle.Y = y;
            Turtle.Angle = 0;
            Turtle.Move(100);
            Turtle.Turn(-90);
            Turtle.Move(50);
            Turtle.Turn(180);
            Turtle.Move(100);
        }
        static void WriteO(int x, int y) {
            Turtle.X = x;
            Turtle.Y = y;
            Turtle.Angle = 0;
            for (int i = 0; i < 4; i++) {
                if (i % 2 == 0) {
                    Turtle.Move(100);
                }
                else {
                    Turtle.Move(50);
                }
                Turtle.TurnRight();
            }
        }
        static void WriteR(int x, int y) {
            Turtle.X = x;
            Turtle.Y = y;
            Turtle.Angle = 0;
            Turtle.Move(100);
            Turtle.TurnRight();
            for (int i = 0; i < 3; i++) {
                Turtle.Move(50);
                Turtle.TurnRight();
            }
            Turtle.Angle = 135;
            Turtle.Move(50 * System.Math.Sqrt(2));
        }
        static void WriteI(int x, int y) {
            Turtle.X = x;
            Turtle.Y = y;
            Turtle.Angle = 0;
            Turtle.TurnLeft();
            Turtle.Move(25);
            Turtle.Turn(180);
            Turtle.Move(50);
            Turtle.X = x;
            Turtle.Y = y;
            Turtle.Angle = 0;
            Turtle.Move(100);
            Turtle.TurnLeft();
            Turtle.Move(25);
            Turtle.Turn(180);
            Turtle.Move(50);
        }
        static void WriteS(int x, int y) {
            Turtle.X = x;
            Turtle.Y = y;
            Turtle.Angle = 90;
            Turtle.Move(50);
            Turtle.Turn(-90);
            Turtle.Move(50);
            Turtle.TurnLeft();
            Turtle.Move(50);
            Turtle.TurnRight();
            Turtle.Move(50);
            Turtle.TurnRight();
            Turtle.Move(50);
        }
        static void WriteE(int x, int y) {
            Turtle.X = x;
            Turtle.Y = y;
            Turtle.Angle = 90;
            Turtle.Move(50);
            Turtle.X = x;
            Turtle.Y = y;
            Turtle.Angle = 0;
            Turtle.Move(100);
            Turtle.TurnRight();
            Turtle.Move(50);
            Turtle.X = x;
            Turtle.Y = y - 50;
            Turtle.Angle = 90;
            Turtle.Move(50);
        }
        static void Main(string[] args) {
            Turtle.Speed = 10;
            WriteT(100, 150);
            WriteO(160, 150);
            WriteR(220, 150);
            WriteT(330, 150);
            WriteO(390, 150);
            WriteI(480, 150);
            WriteS(540, 150);
            WriteE(305, 280);
        }
    }
}
