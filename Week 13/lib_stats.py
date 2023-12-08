import os

def get_inode_info(directory):
    inodes = []
    
    for dirpath, _, filenames in os.walk(directory):
        for filename in filenames:
            filepath = os.path.join(dirpath, filename)
            stat_info = os.lstat(filepath)
            inode = stat_info.st_ino
            inodes.append(inode)
    
    return inodes

def analyze_inodes(inodes):
    min_inode = min(inodes)
    max_inode = max(inodes)
    inode_range = max_inode - min_inode + 1
    inode_density = len(set(inodes)) / inode_range
    
    print(f"Minimum Inode: {min_inode}")
    print(f"Maximum Inode: {max_inode}")
    print(f"Inode Range: {inode_range}")
    print(f"Inode Density: {inode_density}")


def main():
    directory_path = '/etc' 
    inodes = get_inode_info(directory_path)
    analyze_inodes(inodes)

if __name__ == "__main__":
    main()
