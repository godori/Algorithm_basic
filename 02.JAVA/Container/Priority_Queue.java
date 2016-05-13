import java.util.PriorityQueue;
import java.util.Comparator;

// Comparator의 재정의를 이용해 우선순위의 기준을 정해준다
// 길이가 짧으면 우선순위가 높은 결과가 나오도록 한다
class StringLengthComparator implements Comparator<String>{
  @Override
  public int compare(String x, String y){
    if(x.length() < y.length()) return -1;
    if(x.length() > y.length()) return 1;
    return 0;
  }
}

public class Priority_Queue{
  public static void main(String[] args){

    Comparator<String> comparator = new StringLengthComparator();
    PriorityQueue<String> queue = new PriorityQueue<String>(10,comparator);

    // 예제로 사용할 스트링을 길이에 상관없이 큐에 넣는다.
    queue.add("short");
    queue.add("very very long");
    queue.add("medium long");

    while(queue.size() != 0){
      System.out.println(queue.remove());// 우선순위 순서대로 큐에서 꺼낸다.
    }
  }
}
