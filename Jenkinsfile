pipeline{
        agent any
        stages{
        stage('checkout'){
        steps{
        git branch: 'main', url:'https://github.com/jayanthis952/c-project.git'

}
}
stage('sonarqube'){
steps{
        withsonarQubeEnv('sonark8'){
        sh 'mvn clean verify sonar:sonar'
}

}
}
        stage('Docker build'){
        steps{
                sh "docker build -t my_ubuntu:latest ."
}
}
}
}
