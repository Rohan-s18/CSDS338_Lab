import os
import matplotlib.pyplot as plt
import datetime


# Getting stats
def get_file_stats(directory):
    access_times = {}
    modify_times = {}
    inodes = []
    
    # iterating thru files
    for filename in os.listdir(directory):
        filepath = os.path.join(directory, filename)
        if os.path.isfile(filepath):
            stat_info = os.stat(filepath)
            inode = stat_info.st_ino
            access_time = datetime.datetime.fromtimestamp(stat_info.st_atime)
            modify_time = datetime.datetime.fromtimestamp(stat_info.st_mtime)
            
            access_times[inode] = access_time
            modify_times[inode] = modify_time
            inodes.append(inode)
    
    return access_times, modify_times, inodes


# PLotting
def plot_file_times(access_times, modify_times, inodes):
    access_values = [access_times[inode] for inode in inodes]
    modify_values = [modify_times[inode] for inode in inodes]
    
    plt.figure(figsize=(10, 6))
    plt.scatter(inodes, access_values, label='Last Access Time')
    plt.scatter(inodes, modify_values, label='Last Modify Time')
    plt.xlabel('Inode Number')
    plt.ylabel('Time and Date')
    plt.title('Last Access and Modify Times for Files')
    plt.legend()
    plt.xticks(rotation=45)
    plt.tight_layout()
    plt.show()



def main():
    directory_path = 'eme65'
    #access_times, modify_times, inodes = get_file_stats(directory_path)
    #
    #print(access_times)
    #print(modify_times)
    #print(inodes)
    """access_times = {951552: datetime.datetime(2023, 3, 20, 0, 14, 48, 247156), 951553: datetime.datetime(2023, 3, 20, 0, 15, 42, 516563)}
    modify_times = {951552: datetime.datetime(2023, 3, 20, 0, 14, 36, 478839), 951553: datetime.datetime(2023, 3, 20, 0, 15, 38, 244456)}
    inodes = [951552, 951553]"""
    access_times = {951433: datetime.datetime(2023, 3, 30, 4, 13, 56, 563482), 951437: datetime.datetime(2023, 3, 30, 4, 15, 28, 108312), 951309: datetime.datetime(2023, 3, 30, 4, 39, 38, 963609), 931404: datetime.datetime(2023, 3, 30, 3, 52, 57, 582966), 951312: datetime.datetime(2023, 3, 30, 4, 13, 41, 379344), 951436: datetime.datetime(2023, 3, 29, 22, 0, 5, 707890), 951439: datetime.datetime(2023, 3, 30, 3, 52, 44, 890816), 951435: datetime.datetime(2023, 3, 30, 4, 40, 32, 736054), 918950: datetime.datetime(2023, 3, 29, 22, 15, 40, 761964), 951440: datetime.datetime(2023, 3, 30, 4, 13, 35, 247288)}
    modify_times = {951433: datetime.datetime(2023, 3, 29, 21, 50, 23, 788130), 951437: datetime.datetime(2023, 3, 30, 4, 15, 14, 508189), 951309: datetime.datetime(2023, 3, 30, 4, 22, 56, 103668), 931404: datetime.datetime(2023, 3, 30, 3, 52, 45, 214820), 951312: datetime.datetime(2023, 3, 30, 4, 13, 35, 383289), 951436: datetime.datetime(2023, 3, 29, 21, 54, 47, 537774), 951439: datetime.datetime(2023, 3, 30, 3, 52, 38, 154736), 951435: datetime.datetime(2023, 3, 30, 4, 28, 14, 582075), 918950: datetime.datetime(2023, 3, 29, 22, 15, 33, 21912), 951440: datetime.datetime(2023, 3, 30, 4, 13, 32, 535263)}
    inodes = [951433, 951437, 951309, 931404, 951312, 951436, 951439, 951435, 918950, 951440]


    plot_file_times(access_times, modify_times, inodes)



if __name__ == "__main__":
    main()

