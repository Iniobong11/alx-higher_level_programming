#!/usr/bin/python3
if __name__ == "__main__":
    import hidden_4
    for na in dir(hidden_4):
        if na[:2] != "__":
            print("{:na}".format(na))
