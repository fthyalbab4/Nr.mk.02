// rea decompile_all
// name: FUN_00549010
// address: 0x549010
// body: available
// range: 0x549010-0x54907b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

int FUN_00549010(int param_1,char param_2,int *param_3,undefined2 param_4,undefined4 *param_5,
                undefined4 param_6,undefined4 param_7)

{
  int *extraout_ECX;
  char extraout_DL;
  undefined4 *puVar1;
  undefined4 *in_FS_OFFSET;
  byte bVar2;
  undefined4 auStackY_17f4 [1517];
  undefined4 uStack_34;
  undefined4 local_18;
  char local_5;

  bVar2 = 0;
  local_5 = '\0';
  if (param_2 != '\0') {
    param_1 = FUN_00405fb0();
    param_3 = extraout_ECX;
    local_5 = extraout_DL;
  }
  puVar1 = param_5 + (uint)bVar2 * -2 + 1;
  local_18 = *param_5;
  *(undefined4 *)((int)&stack0xffffffec + (uint)bVar2 * 0xfffffffe * 4) = *puVar1;
  *(undefined4 *)(&stack0xfffffff0 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
       puVar1[(uint)bVar2 * -2 + 1];
  *(undefined4 *)
   ((int)(&stack0xfffffff0 + (uint)bVar2 * -8 + (uint)bVar2 * -8) + ((uint)bVar2 * -2 + 1) * 4) =
       (puVar1 + (uint)bVar2 * -2 + 1)[(uint)bVar2 * -2 + 1];
  FUN_0054907c(param_1,0,param_7,param_4,&stack0xffffffe8,param_6);
  *(int **)(param_1 + 0x7c) = param_3;
  if (param_3 != (int *)0x0) {
    *param_3 = param_1;
  }
  if (local_5 != '\0') {
    FUN_00406008(param_1);
    *in_FS_OFFSET = uStack_34;
  }
  return param_1;
}
