class CfgVehicles {
    class Air;
    class Helicopter: Air {
        class ACE_SelfActions {
            class ADDON {
                displayName = "Jumppacks";
                condition = QUOTE(alive _target);
                class GetJetpack {
                    displayName = "Get";
                    condition = QUOTE(alive _target);
                    statement = QUOTE([_player] call FUNC(getJetpack));
                };
                class RechargeJetpack {
                    displayName = "Recharge";
                    condition = QUOTE(alive _target);
                    statement = QUOTE([_player] call FUNC(rechargePack));
                };
            };
        };
    };
};