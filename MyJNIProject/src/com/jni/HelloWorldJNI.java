public class HelloWorldJNI {
    static {
        // Load the native library
        System.loadLibrary("HelloWorldJNI");
    }

    // Native method declaration
    private native void sayHello();

    private native void startProbe();

    private native void stopProbe();

    private native void addToCollection();

    private native void deleteFromCollection();

    public static void main(String[] args) {
        // Create an instance of HelloWorldJNI and invoke sayHello method
        new HelloWorldJNI().sayHello();

        // Create an instance of HelloWorldJNI and invoke startProbe method
        new HelloWorldJNI().startProbe();

        // Create an instance of HelloWorldJNI and invoke stopProbe method
        new HelloWorldJNI().stopProbe();

        // Create another instance of HelloWorldJNI and invoke addToCollection method
        new HelloWorldJNI().addToCollection();

        // Create another instance of HelloWorldJNI and invoke deleteFromCollection method
        new HelloWorldJNI().deleteFromCollection();
    }
}
