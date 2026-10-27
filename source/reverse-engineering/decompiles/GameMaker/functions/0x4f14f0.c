// rea decompile_all
// name: FUN_004f14f0
// address: 0x4f14f0
// body: available
// range: 0x4f14f0-0x4f162d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f14f0(int *param_1,int param_2)

{
  undefined4 uVar1;
  char cVar2;
  int *piVar3;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  byte local_38 [2];
  undefined4 local_36;
  int local_30;
  int local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined1 local_20 [16];

  if (*(int *)(param_2 + 0xc) == 0) {
    if ((*(byte *)(param_1 + 7) & 0x10) == 0) {
      uVar1 = *(undefined4 *)(param_2 + 8);
      local_36._0_2_ = (short)uVar1;
      local_48 = (int)(short)local_36;
      local_36._2_2_ = (short)((uint)uVar1 >> 0x10);
      local_44 = (int)local_36._2_2_;
      local_36 = uVar1;
      local_30 = local_48;
      local_2c = local_44;
      cVar2 = FUN_00438c88(&local_48);
      if (cVar2 == '\0') {
        FUN_004ee1d0(param_1,&local_48,&local_40);
        (**(code **)(*param_1 + 0x54))(param_1,local_20);
        cVar2 = FUN_0040c15c(local_20,&local_40);
        if (cVar2 == '\0') {
          (**(code **)(*param_1 + -0x10))(param_1,param_2);
          return;
        }
      }
      else {
        local_40 = local_48;
        local_3c = local_44;
      }
      local_38[0] = 0;
      FUN_00405d08(param_1,&local_40,local_38);
      *(uint *)(param_2 + 0xc) = (uint)local_38[0];
      if (local_38[0] == 0) {
        piVar3 = (int *)FUN_00405d08(param_1);
        if ((piVar3 != (int *)0x0) && (*(char *)((int)piVar3 + 0x69) != '\0')) {
          FUN_004ee1fc(param_1,param_1);
          piVar3[0x1b] = (int)param_1;
          cVar2 = FUN_00438c88(&local_48);
          if (cVar2 != '\0') {
            uStack_28 = 0;
            uStack_24 = 0;
            FUN_004ee09c(param_1,&uStack_28,&local_48);
          }
          (**(code **)(*piVar3 + 0x44))(piVar3,local_48,local_44);
          *(undefined4 *)(param_2 + 0xc) = 1;
        }
        if (*(int *)(param_2 + 0xc) == 0) {
          (**(code **)(*param_1 + -0x10))(param_1,param_2);
        }
      }
    }
    else {
      (**(code **)(*param_1 + -0x10))(param_1,param_2);
    }
  }
  return;
}
