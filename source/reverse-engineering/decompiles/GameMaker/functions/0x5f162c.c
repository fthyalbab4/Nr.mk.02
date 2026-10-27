// rea decompile_all
// name: FUN_005f162c
// address: 0x5f162c
// body: available
// range: 0x5f162c-0x5f16e5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005f162c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,ushort param_6)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined2 *puVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined2 local_a4;
  undefined2 local_a2;
  undefined1 local_9c [20];
  undefined1 local_88 [8];
  undefined1 local_80 [120];
  undefined1 local_8 [4];

  FUN_00404f08(&local_a4,0x1c,0);
  local_a4 = 0x17;
  FUN_005ee298(param_1,param_3,local_9c,1);
  FUN_0040450c(local_9c,param_4,0x10);
  uVar1 = (uint)param_6;
  local_a2 = (**(code **)PTR_DAT_00781c94)();
  uVar10 = 0;
  uVar9 = 0;
  puVar8 = local_8;
  uVar7 = 0x80;
  puVar6 = local_88;
  uVar5 = 0x1c;
  puVar4 = &local_a4;
  uVar3 = 0xc8000014;
  uVar2 = (**(code **)PTR_DAT_00781e68)();
  FUN_005f4444(param_1,uVar2);
  FUN_0040450c(local_80,param_5,0x10,param_2,uVar3,puVar4,uVar5,puVar6,uVar7,puVar8,uVar9,uVar10,
               uVar1);
  return;
}
