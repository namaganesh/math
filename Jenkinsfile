pipeline 
{
    agent any 
    stages
    {
        stage('build')
        {
            steps
            {
                checkout scmGit(branches: [[name: '*/main']], extensions: [], userRemoteConfigs: [[url: 'https://github.com/namaganesh/math.git']])
                
            }
        }
        stage('test')
        {
            steps
            {
                sh 'gcc main.c'
                sh './a.out'
            }
        }
    }
}
