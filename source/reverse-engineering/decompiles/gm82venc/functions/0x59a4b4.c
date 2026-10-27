// rea decompile_all
// name: FUN_0059a4b4
// address: 0x59a4b4
// body: available
// range: 0x59a4b4-0x59a59d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

undefined1 FUN_0059a4b4(int *param_1,int param_2,int param_3,int *param_4,int *param_5,int param_6)

{
  int iVar1;
  undefined4 *puVar2;
  byte bVar3;
  undefined4 auStackY_17f8 [1522];
  undefined4 local_1c;
  undefined1 local_9;
  int local_8;

  bVar3 = 0;
  local_9 = 0;
  local_8 = param_2;
  if (((param_2 < param_1[6]) || (param_1[7] <= param_2)) ||
     (local_8 = param_1[7], local_8 <= param_3)) {
    iVar1 = param_1[4];
    if (iVar1 < param_3) {
      param_3 = iVar1;
      if (iVar1 < param_1[8] + -1) {
        param_3 = iVar1 + 1;
      }
      iVar1 = FUN_0059a458(param_1,param_3);
      if (iVar1 == 0) {
        param_3 = param_3 + -1;
      }
    }
    iVar1 = FUN_0059a458(param_1,local_8);
    *param_5 = iVar1;
    iVar1 = FUN_0059a458(param_1,param_3);
    *param_4 = iVar1;
    if (*param_4 == 0) {
      iVar1 = (*(code *)param_1[10])(param_1[0xb],local_8);
      *param_4 = iVar1 + *param_5;
    }
    else {
      iVar1 = (*(code *)param_1[10])(param_1[0xb],param_3);
      *param_4 = *param_4 + iVar1;
    }
    if (param_1[3] < *param_4) {
      *param_4 = param_1[3];
    }
    if (*(char *)(param_6 + 8) != '\0') {
      *param_4 = *param_4 + *param_1;
    }
    local_9 = 1;
  }
  else {
    local_8 = param_2;
    FUN_0040c354(0,0,0,&stack0xffffffe4,0);
    puVar2 = *(undefined4 **)(param_6 + -8) + (uint)bVar3 * -2 + 1;
    **(undefined4 **)(param_6 + -8) = local_1c;
    *puVar2 = *(undefined4 *)((int)&stack0xffffffe8 + (uint)bVar3 * 0xfffffffe * 4);
    puVar2[(uint)bVar3 * -2 + 1] =
         *(undefined4 *)(&stack0xffffffec + (uint)bVar3 * -8 + (uint)bVar3 * -8);
    (puVar2 + (uint)bVar3 * -2 + 1)[(uint)bVar3 * -2 + 1] =
         *(undefined4 *)
          ((int)(&stack0xffffffec + (uint)bVar3 * -8 + (uint)bVar3 * -8) +
          ((uint)bVar3 * -2 + 1) * 4);
  }
  return local_9;
}
