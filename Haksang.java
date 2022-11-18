package Haksang;
import java.util.*;
public class Haksang {
	public static String grade(float favg) {
		String grade;
		if(favg >= 90) {
			grade = "A";
		}
		else if(favg >= 80) {
			grade = "B";
		}
		else if(favg >= 70) {
			grade = "C";
		}
		else if(favg >= 60) {
			grade = "D";
		}
		else {
			grade = "F";
		}
		return grade;
	}

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		int istu;
		System.out.print("학생 수 입력 : ");
		istu = sc.nextInt();
		System.out.println("");
		
		int i,j,isort;
		int[] inum = new int[istu];
		int[] ikor = new int[istu];
		int[] ieng = new int[istu];
		int[] imath = new int[istu];
		int[] isum = new int[istu];
		float[] favg = new float[istu];
		String[] sgrade = new String[istu];
		int[] irank = new int[istu];
		String sdap ;
		
		
		for(i=0;i<istu;i++) {
			System.out.printf("[%d] : 국어 영어 수학 : ",i+1);
			inum[i] = i+1;
			ikor[i] = sc.nextInt();
			ieng[i] = sc.nextInt();
			imath[i] = sc.nextInt();
			isum[i] = ikor[i] + ieng[i] + imath[i];
			favg[i] = (float)isum[i]/3;
			sgrade[i] = grade(favg[i]);
			irank[i] = 1;
		}
		for(i=0;i<istu;i++) {
			for(j=0;j<istu;j++) {
				if(isum[i]<isum[j]) {
					irank[i]++;
				}
			}
		}
		System.out.print("성적을 출력하시겠습니까(y/n)? : ");
		sdap = sc.next();
		if(sdap.equals("y")||sdap.equals("Y")) {
			System.out.print("오름차순(1), 내림차순(2)");
			isort = sc.nextInt();
			if(isort == 1) {
				for(i=0;i<istu;i++) {
					for(j=i;j<istu;j++) {
						if(isum[i]<isum[j]) {
							int temp;
							float ftemp;
							String stemp;
							
							temp = inum[i];
							inum[i] = inum[j];
							inum[j] = temp;
							
							temp = ikor[i];
							ikor[i] = ikor[j];
							ikor[j] = temp;
							
							temp = ieng[i];
							ieng[i] = ieng[j];
							ieng[j] = temp;
							
							temp = imath[i];
							imath[i] = imath[j];
							imath[j] = temp;
							
							temp = isum[i];
							isum[i] = isum[j];
							isum[j] = temp;
							
							ftemp = favg[i];
							favg[i] = favg[j];
							favg[j] = ftemp;
							
							stemp = sgrade[i];
							sgrade[i] = sgrade[j];
							sgrade[j] = stemp;
							
							temp = irank[i];
							irank[i] = irank[j];
							irank[j] = temp;
						}				
					}
				}
			}
			else if (isort == 2) {
				for(i=0;i<istu;i++) {
					for(j=i;j<istu;j++) {
						if(isum[i]>isum[j]) {
							int temp;
							float ftemp;
							String stemp;
							
							temp = inum[i];
							inum[i] = inum[j];
							inum[j] = temp;
							
							temp = ikor[i];
							ikor[i] = ikor[j];
							ikor[j] = temp;
							
							temp = ieng[i];
							ieng[i] = ieng[j];
							ieng[j] = temp;
							
							temp = imath[i];
							imath[i] = imath[j];
							imath[j] = temp;
							
							temp = isum[i];
							isum[i] = isum[j];
							isum[j] = temp;
							
							ftemp = favg[i];
							favg[i] = favg[j];
							favg[j] = ftemp;
							
							stemp = sgrade[i];
							sgrade[i] = sgrade[j];
							sgrade[j] = stemp;
							
							temp = irank[i];
							irank[i] = irank[j];
							irank[j] = temp;
						}
					}
				}
			}
		}
		
		else if(sdap.equals("n")||sdap.equals("N")) {
			System.out.println("\n---- 성적을 출력하지 않겠습니다. ----");
		}
		System.out.println("============================= 성적표 =============================");
		System.out.println("-----------------------------------------------------------------");
		System.out.println("|번호\t국어\t영어\t수학\t합계\t평균\t학점\t석차\t|");
		System.out.println("-----------------------------------------------------------------");
		for(i=0;i<istu;i++) {
			System.out.printf("|[%d]\t%d\t%d\t%d\t%d\t%.1f\t%s\t%d\t|\n",inum[i],ikor[i],ieng[i],imath[i],isum[i],favg[i],sgrade[i],irank[i]);
		}
		System.out.println("-----------------------------------------------------------------");
		sc.close();
	}
}

