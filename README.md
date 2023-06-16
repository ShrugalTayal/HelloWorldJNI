# HelloWorldJNI

```markdown
# Java Project with Packages and Classes

This project demonstrates how to create a Java project with packages and classes in Linux.

## Getting Started

Follow these steps to create and run the Java project:

1. Open a terminal.

2. Choose a directory where you want to create your Java project. For example, if you want to create it in your home directory, you can navigate to it using the command:

   ```bash
   cd ~
   ```

3. Create a new directory for your Java project. For example:

   ```bash
   mkdir MyJNIProject
   ```

4. Navigate into the project directory:

   ```bash
   cd MyJNIProject
   ```

5. Inside the project directory, create a source code directory to store your Java source files. Conventionally, this directory is named `src`. Create it using the command:

   ```bash
   mkdir src
   ```

6. Now, you can start creating packages and classes within the `src` directory. For example, let's say you want to create a package named `com.jni` with a class named `HelloWorldJNI`. Create the package directory structure using the following command:

   ```bash
   mkdir -p src/com/jni
   ```

7. Use a text editor or an IDE to create the Java file within the appropriate package directory. For example, you can use the `vim` text editor to create the `HelloWorldJNI.java` file:

   ```bash
   vim src/com/jni/HelloWorldJNI.java
   ```

   This will open the `HelloWorldJNI.java` file in the `vim` editor. You can then write your Java code in the file and save it.

8. Once you have written your Java code, you can compile and run it. First, navigate to the `src` directory:

   ```bash
   cd src
   ```

9. Compile the Java file using the `javac` command. Since the `HelloWorld` class is inside the `com.mycompany` package, use the package-qualified class name:

   ```bash
   javac com/jni/HelloWorldJNI.java
   ```

   This will generate the compiled `.class` file in the same directory.

10. Now, you can run the compiled Java program. Go back to the project directory:

    ```bash
    cd ..
    ```

    Run the Java program using the `java` command, providing the package-qualified class name:

    ```bash
    java -cp src com.jni.HelloWorldJNI
    ```

    The `-cp` option specifies the classpath, which tells Java where to find the compiled `.class` files. In this case, we specify the `src` directory as the classpath and provide the package-qualified name of the main class (`com.mycompany.HelloWorld` in this example).

That's it! You have successfully created a Java project with packages and classes in Linux. You can continue adding more packages, classes, and files to your project as needed.

## License

This project is licensed under the [MIT License](LICENSE).
```

Feel free to customize and enhance the content of the `README.md` file based on your specific project requirements.
