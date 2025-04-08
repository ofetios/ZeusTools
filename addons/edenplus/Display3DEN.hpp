class ctrlMenu;

class Display3DEN
{
    class ContextMenu: ctrlMenu
    {
        class Items
        {
            items[] += {"ZT_edenplus_RandomRotate"};

            class ZT_edenplus_RandomRotate
            {
                text = "Randomly Rotate Objects";
                action = "call ZT_fnc_randomRotate";
                conditionShow = "selected";
                value = 0;
            };
        };
    };
};
