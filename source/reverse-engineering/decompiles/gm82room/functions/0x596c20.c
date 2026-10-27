// rea decompile_all
// name: FUN_00596c20
// address: 0x596c20
// body: available
// range: 0x596c20-0x596d8e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00596c20(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  byte bVar4;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 *local_14;
  undefined4 *local_c;

  bVar4 = 0;
  local_14 = param_2;
  local_c = param_1;
  FUN_00404f38(param_3,0x40,0);
  cVar1 = FUN_0040c3c0(&local_84,local_c,local_14);
  if (cVar1 == '\0') {
    puVar3 = param_3 + (uint)bVar4 * -2 + 1;
    puVar2 = local_c + (uint)bVar4 * -2 + 1;
    *param_3 = *local_c;
    *puVar3 = *puVar2;
    puVar3[(uint)bVar4 * -2 + 1] = puVar2[(uint)bVar4 * -2 + 1];
    (puVar3 + (uint)bVar4 * -2 + 1)[(uint)bVar4 * -2 + 1] =
         (puVar2 + (uint)bVar4 * -2 + 1)[(uint)bVar4 * -2 + 1];
    puVar3 = param_3 + (uint)bVar4 * -2 + 5;
    puVar2 = local_14 + (uint)bVar4 * -2 + 1;
    param_3[4] = *local_14;
    *puVar3 = *puVar2;
    puVar3[(uint)bVar4 * -2 + 1] = puVar2[(uint)bVar4 * -2 + 1];
    (puVar3 + (uint)bVar4 * -2 + 1)[(uint)bVar4 * -2 + 1] =
         (puVar2 + (uint)bVar4 * -2 + 1)[(uint)bVar4 * -2 + 1];
  }
  else {
    FUN_0040c420(&local_94,local_c,local_14);
    local_1c = local_94;
    local_18 = local_90;
    local_24 = local_94;
    local_20 = local_80;
    local_2c = local_94;
    local_28 = local_78;
    cVar1 = FUN_00596ba8(param_3,&local_1c,&local_24,&local_2c);
    if (cVar1 != '\0') {
      param_3[2] = local_84;
    }
    local_34 = local_84;
    local_30 = local_90;
    local_3c = local_7c;
    local_38 = local_90;
    local_44 = local_8c;
    local_40 = local_90;
    cVar1 = FUN_00596ba8(param_3 + 4,&local_34,&local_3c,&local_44);
    if (cVar1 != '\0') {
      param_3[7] = local_80;
    }
    local_4c = local_8c;
    local_48 = local_80;
    local_54 = local_8c;
    local_50 = local_78;
    local_5c = local_8c;
    local_58 = local_88;
    cVar1 = FUN_00596ba8(param_3 + 8,&local_4c,&local_54,&local_5c);
    if (cVar1 != '\0') {
      param_3[8] = local_7c;
    }
    local_64 = local_94;
    local_60 = local_88;
    local_6c = local_84;
    local_68 = local_88;
    local_74 = local_7c;
    local_70 = local_88;
    cVar1 = FUN_00596ba8(param_3 + 0xc,&local_64,&local_6c,&local_74);
    if (cVar1 != '\0') {
      param_3[0xd] = local_78;
    }
  }
  return;
}
