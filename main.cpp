#include <iostream>




// 我需要一个结构体，来说明所有类型的桌子应该长什么样子
struct Table {
    std::string type;
    int height;
    std::string material; // 材质
    int drawers; // 有无抽屉以及数量
};

// 构建桌子的函数
void buildTable(const std::string& tableType) {
    Table table;
    // 餐桌、办公桌、咖啡桌
    if (tableType == "dining") {
        table.type = "餐桌";
        table.height = 75;
        table.material = "桐木";
        table.drawers = 0;
        std::cout << "已构建 " << table.type << "，高度 " << table.height << "cm，材质 " << table.material << "，无抽屉" << std::endl;
    } else if (tableType == "office") {
        table.type = "办公桌";
        table.height = 100;
        table.material = "塑料";
        table.drawers = 2;
        std::cout << "已构建 " << table.type << "，高度 " << table.height << "cm，材质 " << table.material << "，有 " << table.drawers << " 个抽屉" << std::endl;
    } else if (tableType == "coffee") {
        table.type = "咖啡桌";
        table.height = 80;
        table.material = "木";
        table.drawers = 0;
        std::cout << "已构建 " << table.type << "，高度 " << table.height << "cm，材质 " << table.material << "，无抽屉" << std::endl;
    } else {
        std::cout << "Unknown table type: " << tableType << std::endl;
    }
}

int main() {

    std::cout << "现在你可以造桌子了，请你选择你要造的桌子类型（dining/office/coffee）：" << std::endl;
    std::string tableType;
    std::cin >> tableType;
    buildTable(tableType);

    return 0;
}

// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.