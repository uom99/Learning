package Game;
import java.util.*;
public class Game {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		int icom ,iuser;
		int iseed;
		
		iseed = 500;
		
		System.out.println("========== 홀짝 게임 ==========");
		while(true) {
			System.out.println("------------------------------------");
			System.out.printf("\t\t\t price : %d\n",iseed);
			System.out.println("------------------------------------");
			icom = (int)(Math.random()*100);
			icom = icom%2;
			System.out.print("홀(1),짝(2) 입력 : ");
			iuser = sc.nextInt();
			if(iuser != 1 && iuser != 2) {
			System.out.println("\n\n==Game exit==");
			break;
		}
		else {
			if(iuser == 2) {
				iuser = 0;
			}
			System.out.printf("Com : %d vs User : %d\n",icom,iuser);
			if(icom == iuser) {
				System.out.println("You win");
				iseed += 100;
			}
			else{
				System.out.println("You lose");
				iseed -= 100;
			}
		}

		
		if(iseed == 0) {
			System.out.println("--------------------");
			System.out.println("남은 금액이 없습니다.");
			System.out.println("Game Over");
			break;
		}
		

	}
		sc.close();
	}
}

