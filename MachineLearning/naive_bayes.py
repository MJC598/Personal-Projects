#prepping for Machine Learning class by following along with code from Intro to Machine Learning on Udacity

#just creating so simple datasets since its Naive Bayes
import numpy as np 
#import data from GSBC data collected
#currently throwing an error regarding invalid numbers in np.array, when I have internet check docs on np.array
X = np.array([[-1, -1], [-2, -1], [-3, -2], [1, 1], [2, 1], [3, 2]])
Y = np.array([1, 1, 1, 2, 2, 2])

from sklearn.naive_bayes import GaussianNB
classifier = GaussianNB()
#fit = train
#X is features, Y is labels
classifier.fit(X,Y)

#ask for prediction, this must always be after fit
print(classifier.predict([[-0.8, -1]]))