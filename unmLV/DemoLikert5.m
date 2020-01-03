% A simple script to demonstrate CollectLikert with a 5-point scale.

clear;

% Specifications for the overall window holding the questionnaire:
WindowLabel = 'MatLab Attitudes Questionnaire';
WindowSpecs(1) = 100;  % Left edge (i.e., pixels in from left edge of screen)
WindowSpecs(2) = 100;  % Bottom edge (i.e., pixels up from from bottom edge of screen)
WindowSpecs(3) = 700;  % Width in pixels
WindowSpecs(4) = 700;  % Height in pixels

% Specifications for an instruction box that appears on the questionnaire:
InstructionsText = 'INSTRUCTIONS:\n\nPlease answer each item by marking a number to indicate how much you agree with each statement. Answer all items even if unsure of your answer. When you have finished, check over each one to make sure you have answered them all.\n\nPlease call the experimenter if you have any questions.';
InstructionHeight = 90;  % This must be set to the height of the instruction box; use trial and error.

% Here are the labels (left to right on the form) of the Likert scale points.
ScaleLabels{1} = 'Strongly\ndisagree';
ScaleLabels{2} = 'Disagree';
ScaleLabels{3} = 'Neutral';
ScaleLabels{4} = 'Agree';
ScaleLabels{5} = 'Strongly\nagree';
ScaleLabelsHeight = 65;  % This must be set to the height of the scale labels; use trial and error.
ScaleSmallestValue = 0;  % The scale values are to be numbered starting with this value.

RequireAllAnswers = 1;  % Set to 1 if all questions must be answered and 0 if some can be left blank.
MissingValue = -1;  % This is the score for any question that is not answered--only used if RequireAllAnswers is 0.

Questions{1} = 'I like programming in MatLab better than programming in Ada.';
Questions{2} = 'I like programming in MatLab better than programming in Basic.';
Questions{3} = 'I like programming in MatLab better than programming in Cobol.';
Questions{4} = 'I like programming in MatLab better than programming in Delphi.';
Questions{5} = 'I like programming in MatLab better than programming in Euclid.';
Questions{6} = 'I like programming in MatLab better than programming in Fortran.';
Questions{7} = 'I like programming in MatLab better than programming in Godiva.';
Questions{8} = 'I like programming in MatLab better than programming in Haskell.';
Questions{9} = 'I like programming in MatLab better than eating pizza.';
Questions{10} = 'I like programming in MatLab better than eating chocolate.';


QuestionWidth = 500;  % Width of the question on the form, in pixels
NQuestions = numel(Questions);
DefaultQuestionHeight = 30;   % This is a default question height in pixels that can be adjusted with trial and error.
QuestionHeights = DefaultQuestionHeight*ones(NQuestions); % Set all question heights to the default.
% To leave more or less height for particular questions, change their
% QuestionHeights here, after the default has been set.  For example,
% QuestionHeights(5) = DefaultQuestionHeight + 10;  % This leaves 10 extra pixels of height for question 10.

Likert = CollectLikert(WindowSpecs,WindowLabel,InstructionsText,InstructionHeight,...
    ScaleLabels,ScaleLabelsHeight, ScaleSmallestValue, ...
    Questions, QuestionWidth, QuestionHeights, RequireAllAnswers, MissingValue)

