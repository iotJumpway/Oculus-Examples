#pragma once

#include "AllowWindowsPlatformTypes.h"
#include "HideWindowsPlatformTypes.h"

//~~~~~ Multi Threading ~~~
class ThreadIt : public FRunnable
{
	/** Singleton instance, can access the thread any time via static accessor, if it is active! */
	static  ThreadIt* Runnable;

	/** Thread to run the worker FRunnable on */
	FRunnableThread* Thread;

	//Done?
	bool IsFinished() const
	{
	}

	//~~~ Thread Core Functions ~~~

	//Constructor / Destructor
	ThreadIt();
	virtual ~ThreadIt();

	// Begin FRunnable interface.
	virtual bool Init();
	virtual uint32 Run();
	virtual void Stop();
	// End FRunnable interface

	/** Makes sure this thread has stopped properly */
	void EnsureCompletion();



	//~~~ Starting and Stopping Thread ~~~



	/*
	Start the thread and the worker from static (easy access)!
	This code ensures only 1 Prime Number thread will be able to run at a time.
	This function returns a handle to the newly started instance.
	*/
	static ThreadIt* JoyInit(TArray<uint32>& TheArray, const int32 IN_TotalPrimesToFind, AVictoryGamePlayerController* IN_PC);

	/** Shuts down the thread. Static so it can easily be called from outside the thread context */
	static void Shutdown();

	static bool IsThreadFinished();

};