package _8;
public class Charac {
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		String str=Integer.toString(456);	//��ȡ����Ķ����Ʊ�ʾ
		String str2=Integer.toBinaryString(456);	//��ȡ����Ķ����Ʊ�ʾ
		String str3=Integer.toHexString(456);	//��ȡ�����ʮ�����Ʊ�ʾ
		String str4=Integer.toOctalString(456);	//��ȡ����İ˽��Ʊ�ʾ
		System.out.println("456��ʮ���Ʊ�ʾ�ǣ�"+str);
		System.out.println("456�Ķ����Ʊ�ʾ�ǣ�"+str2);
		System.out.println("456��ʮ�����Ʊ�ʾ�ǣ�"+str3);
		System.out.println("456�İ˽��Ʊ�ʾ�ǣ�"+str4);
	}
}
