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
    access_times = {951552: datetime.datetime(2023, 3, 20, 0, 14, 48, 247156), 951553: datetime.datetime(2023, 3, 20, 0, 15, 42, 516563)}
    modify_times = {951552: datetime.datetime(2023, 3, 20, 0, 14, 36, 478839), 951553: datetime.datetime(2023, 3, 20, 0, 15, 38, 244456)}
    inodes = [951552, 951553]
    plot_file_times(access_times, modify_times, inodes)



if __name__ == "__main__":
    main()

