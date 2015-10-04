package Collection;
import java.util.HashMap;
import java.util.Map;


public class Main {
	
	private Map<HotSong, SexySinger> ListSong = new HashMap<HotSong, SexySinger>();
	private Map<String, String> ABC = new HashMap<String, String>();
	
	public static void main(String[] args) {
		Main List = new Main();
		
		final String []Song = {"Living for Love", "Bad Blood", "Telephone", "Listen", "Shake It Off", "Let It Go", "Gost Town"};
		final String []Singer = {"Madona", "Taylor Swift", "Lady Gaga", "Beyonce", "Taylor Swift", "Idina Menzel", "Madona"};
	
		HotSong HS1 = new HotSong();
		
		int nSong = Song.length;
		int nSinger = Singer.length;
		for(int i = 0; i < (nSong < nSinger ? nSong : nSinger); i++) {
			HotSong HS = new HotSong();
			HS.setName(Song[i]);
			HS1 = HS;
			SexySinger SS = new SexySinger();
			SS.setName(Singer[i]);
			
			List.ListSong.put(HS, SS);
			List.ABC.put(Song[i], Singer[i]);
		}
		
		
		System.out.println(List.ListSong.get(HS1).getName());
	
	}
}
