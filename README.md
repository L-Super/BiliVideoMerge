# BiliVideoMerge

#### 介绍
哔哩哔哩视频合并工具

#### 软件架构

1. 读取json,xml文件获取视频信息
2. 遍历读取文件夹
3. 使用ffmpeg合并视频，考虑采用多线程
4. 弹幕转为字幕
5. 在线升级

#### 界面结构

上部三分之一区域

+ 选择目录
+ 输出目录
+ 合并按钮

下部

+ MVC视图，显示选择的目录列表文件，合并进度等信息



#### 缓存视频目录结构

![image-20220425181333760](https://gitee.com/listening2020/md_pic/raw/master/img-workpc/image-20220425181333760.png)

json有用数据：

`"title"`

`"page_data": {
        "page": 3,
        "part": "2-2 对象结构的发展和演化",
        "width": 1280,
        "height": 720,
        "rotate": 0,
        "download_title": "视频已缓存完成",
        "download_subtitle": "深入分析C++对象模型 2-2 对象结构的发展和演化"
    }`

原始数据：

```json
{
    "media_type": 2,
    "has_dash_audio": true,
    "is_completed": true,
    "total_bytes": 115887767,
    "downloaded_bytes": 115887767,
    "title": "深入分析C++对象模型",
    "type_tag": "64",
    "cover": "http:\/\/i0.hdslb.com\/bfs\/archive\/208e6543966b2714f9e64e0f5feda5477408e708.png",
    "video_quality": 64,
    "prefered_video_quality": 64,
    "guessed_total_bytes": 0,
    "total_time_milli": 2624845,
    "danmaku_count": 0,
    "time_update_stamp": 1642081220273,
    "time_create_stamp": 1642081184812,
    "can_play_in_advance": true,
    "interrupt_transform_temp_file": false,
    "cache_version_code": 6090600,
    "avid": 593091891,
    "spid": 0,
    "seasion_id": 0,
    "bvid": "BV1xq4y1y7S1",
    "owner_id": 591802978,
    "page_data": {
        "cid": 482708143,
        "page": 3,
        "from": "vupload",
        "part": "2-2 对象结构的发展和演化",
        "link": "",
        "vid": "",
        "has_alias": false,
        "tid": 231,
        "width": 1280,
        "height": 720,
        "rotate": 0,
        "download_title": "视频已缓存完成",
        "download_subtitle": "深入分析C++对象模型 2-2 对象结构的发展和演化"
    }
}
```




#### 安装教程

1.  xxxx
2.  xxxx
3.  xxxx

#### 使用说明

1.  xxxx
2.  xxxx
3.  xxxx

#### 参与贡献

1.  Fork 本仓库
2.  新建 Feat_xxx 分支
3.  提交代码
4.  新建 Pull Request



