public class Strings{

  // String
  //          vs  StringBuilder
  //                              vs  StringBuffer

  public static void main(String[] args){

    // 일반적으로 쓰는 String은 불변의 속성을 가진다
    // 즉, 재지정 시 수정되지 않고 새로운 문자열을 생성하는 것이다! 예를 들면,
    String str = "Jonadan";
    System.out.println(str);

    str = "DIO";
    System.out.println(str);

    // 결국 str 은 "DIO"를 가리키게 되고
    // "Jonadan"은 메모리상에 존재하다가 후에 GC에게 회수당한다 ...

    str = "Highed "+ str;
    System.out.println(str);

    // 기존 "DIO"역시 회수당하고
    // str은 "Highed DIO" 라는 새로운 객체를 가리키게 된다!

    // 만약 이를 여러번 행한다면 어떻게 될까?

    Strings strings = new Strings();
    System.out.println(strings.jojoStory());
    // jojoStory()는 새로운 문자열을 rt 객체에 계속 추가하는 메소드.
    // 실행시 JVM 메모리에 많은 양의 String 객체가 실행되는 단점을 가진다!

    // 따라서 여러 개의 문자열을 조합해야 할 때는
    // StringBuffer 클래스를 사용하면 된다!
    StringBuffer sf = new StringBuffer("Josuke");
    sf.append(" and");
    sf.append(" Crazy-Diamond");
    System.out.println(sf);

    // 이처럼 append로 문자열을 계속 더해도 객체는 하나만 생성된다!
    // append 뿐만 아니라 delete, replace, insert 모두 한 객체로 O.K!

    // String에 비해 StringBuffer의 속도가 얼마나 빠른지 알아보자
    // 1. String을 사용할 경우
    long beginTime = System.currentTimeMillis();
    String rt ="";

    for(int i=0; i<10000; i++)
      rt += strings.jojoStory();

    System.out.println("String Exec Time : "
          + (System.currentTimeMillis() - beginTime)
          + "ms");

    // 2. StringBuffer을 사용할 경우
    long beginTime2 = System.currentTimeMillis();
    StringBuffer rt2 = new StringBuffer();

    for(int i=0; i<10000; i++)
      rt2.append(strings.jojoStory());

    System.out.println("StringBuffer Exec Time : "
          + (System.currentTimeMillis() - beginTime2)
          + "ms");

    // 시간을 비교해보면 상당한 시간 차가 발생하는 것을 알 수 있다! (ex. 6000ms vs 3ms)


    // StringBuilder sb = new StringBuilder("Jovana");
    // sb.append(" and Gold-Experience");
    // System.out.println(sb);


  }

  public String jojoStory(){
    String rt = "<JoJo>";
    rt += " is";
    rt += " a";
    rt += " Story";
    rt += " of";
    rt += " Jonadan,";
    rt += " Joseph,";
    rt += " Jotaro,";
    rt += " Josuke,";
    rt += " Jorno,";
    rt += " Jolyne,";
    rt += " and Johnny";
    rt += "\'s";
    rt += " Bizarre";
    rt += " Adventure";

    return rt;
  }

}
