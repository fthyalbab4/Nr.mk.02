// rea decompile_all
// name: FUN_0051820c
// address: 0x51820c
// body: available
// range: 0x51820c-0x518269 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

int FUN_0051820c(int param_1,char param_2)

{
  char extraout_DL;
  char cVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *in_FS_OFFSET;
  byte bVar4;
  undefined4 auStackY_17f0 [1518];
  undefined4 uStack_30;
  undefined4 local_14;

  bVar4 = 0;
  cVar1 = '\0';
  if (param_2 != '\0') {
    param_1 = FUN_00406510();
    cVar1 = extraout_DL;
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  FUN_00436ad0(0,0,0,&stack0xffffffec,0);
  puVar2 = (undefined4 *)(param_1 + 0x14 + (uint)bVar4 * -8);
  *(undefined4 *)(param_1 + 0x10) = local_14;
  puVar3 = puVar2 + (uint)bVar4 * -2 + 1;
  *puVar2 = *(undefined4 *)((int)&stack0xfffffff0 + (uint)bVar4 * 0xfffffffe * 4);
  *puVar3 = *(undefined4 *)(&stack0xfffffff4 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
  puVar3[(uint)bVar4 * -2 + 1] =
       *(undefined4 *)
        ((int)(&stack0xfffffff4 + (uint)bVar4 * -8 + (uint)bVar4 * -8) + ((uint)bVar4 * -2 + 1) * 4)
  ;
  if (cVar1 != '\0') {
    FUN_00406568(param_1);
    *in_FS_OFFSET = uStack_30;
  }
  return param_1;
}
