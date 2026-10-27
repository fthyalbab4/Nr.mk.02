// rea decompile_all
// name: FUN_004ef228
// address: 0x4ef228
// body: available
// range: 0x4ef228-0x4ef2f9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char FUN_004ef228(int param_1,undefined2 param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  uint uVar2;
  char local_11;
  undefined4 local_10;
  undefined4 uStack_c;
  undefined2 local_6;

  local_10 = *param_4;
  uStack_c = param_4[1];
  local_11 = '\0';
  local_6 = param_2;
  if (*(short *)(param_1 + 0x142) != 0) {
    (**(code **)(param_1 + 0x140))
              (*(undefined4 *)(param_1 + 0x144),param_1,param_2,&local_11,&local_10,param_3);
  }
  if (local_11 == '\0') {
    *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) + param_3;
    while (uVar2 = (int)*(uint *)(param_1 + 0x94) >> 0x1f,
          0x77 < (int)((*(uint *)(param_1 + 0x94) ^ uVar2) - uVar2)) {
      iVar1 = *(int *)(param_1 + 0x94);
      uVar2 = (int)*(uint *)(param_1 + 0x94) >> 0x1f;
      *(uint *)(param_1 + 0x94) = ((*(uint *)(param_1 + 0x94) ^ uVar2) - uVar2) + -0x78;
      if (iVar1 < 0) {
        if (*(int *)(param_1 + 0x94) != 0) {
          *(int *)(param_1 + 0x94) = -*(int *)(param_1 + 0x94);
        }
        local_11 = FUN_00405d08(param_1,local_6,&local_10);
      }
      else {
        local_11 = FUN_00405d08(param_1,local_6,&local_10);
      }
    }
  }
  return local_11;
}
