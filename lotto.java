package lotto;
import java.util.*;

public class lotto {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		
		int[] inum = new int[6];
		int[] ilotto = new int[6];
		
		int i,j;
		int itemp,temp;
		int iselect;
		int rank = 0;
		int count = 0;
		
		System.out.println("========로또========");
		
		while(true) {
		System.out.println("수동모드 (1번), 자동모드(2번), 반자동모드(3번), 종료(4번): ");
		iselect = sc.nextInt();
		if(iselect == 1) {
		for(i=0;i<6;i++) {
			System.out.printf("%d번째 값 입력 : ", i+1);
			itemp = sc.nextInt();
			if(itemp <= 45 && itemp >= 0) {
				inum[i] = itemp;
			for(j=0; j<i;j++) {
				if(inum[i]==inum[j]) {
					System.out.println("중복입니다. 다시 입력하세요.");
					i--;
				}
			}
			}
			else {
				System.out.println("1~45사이 값만 입력하세요.");
			}
			
		}
		}
		else if(iselect == 2) {
			for(i=0;i<6;i++) {
				inum[i] = (int)(Math.random() * 45 + 1 );
				for(j=0; j<i;j++) {
					if(inum[i]==inum[j]) {
						i--;
					}
			}
			
		}
			
		}
		if(iselect == 3) {
			for(i=0;i<inum.length;i++) {
				System.out.printf("%d번째 값 입력 : ", i+1);
				itemp = sc.nextInt();
				if(itemp <= 45 && itemp > 0) {
					inum[i] = itemp;
				for(j=0; j<i;j++) {
					if(inum[i]==inum[j]) {
						System.out.println("중복입니다. 다시 입력하세요.");
						i--;
					}
				}
				}
				else if(itemp == 0) {
					inum[i] = (int)(Math.random() * 45 + 1 );
					for(j=0; j<i;j++) {
						if(inum[i]==inum[j]) {
							System.out.println("중복입니다. 다시 입력하세요.");
							i--;
						}
					}
				}
				else {
					System.out.println("1~45사이 값만 입력하세요.");
				}
				
			}
			}
		else if (iselect == 4) {
			System.out.println("로또 종료");
			break;
		}
		else {
//			System.out.println("1번 2번 3번 4번 중에 선택하세요");
		}
		
		for(i=0;i<6;i++) {
			ilotto[i] = (int)(Math.random() * 45 + 1 );
			for(j=0; j<i;j++) {
				if(ilotto[i]==ilotto[j]) {
					i--;
				}
		}
		
	}
		for(i=0;i<6;i++) {
			for(j=i;j<6;j++) {
				if(inum[i] > inum[j]) {
					temp = inum[i];
					inum[i] = inum[j];
					inum[j] = temp;
				}
			}
		}
		for(i=0;i<6;i++) {
			for(j=i;j<6;j++) {
				if(ilotto[i] > ilotto[j]) {
					temp = ilotto[i];
					ilotto[i] = ilotto[j];
					ilotto[j] = temp;
				}
			}
		}
		count = 0;
		for(i=0;i<6;i++) {
			for(j=0; j<6;j++) {
				if(inum[i]==ilotto[j]) {
					count++;
				}
			}
		}
		
		if(count == 3) {
			rank = 4;
		}
		else if(count == 4) {
			rank = 3;
		}
		else if(count == 5) {
			rank = 2;
		}
		else if(count == 6) {
			rank = 1;
		}
		else {
			rank = 6;
		}

		System.out.printf("입력한 로또 번호 : %d,%d,%d,%d,%d,%d\n",inum[0],inum[1],inum[2],inum[3],inum[4],inum[5]);
		System.out.printf("로또 당첨 번호 : %d,%d,%d,%d,%d,%d\n",ilotto[0],ilotto[1],ilotto[2],ilotto[3],ilotto[4],ilotto[5]);
		
		System.out.printf("%d개 맞추셨습니다. %d등 입니다!\n",count,rank);
		rank = 0;
		count = 0;
		}

}
}