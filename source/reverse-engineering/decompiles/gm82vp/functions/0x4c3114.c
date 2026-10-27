// rea decompile_all
// name: FUN_004c3114
// address: 0x4c3114
// body: available
// range: 0x4c3114-0x4c31c6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004c3114(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  short local_14 [2];

  iVar2 = FUN_004df914(param_1,0);
  if ((iVar2 != 0) && (param_1 != iVar2)) {
    if ((*(char *)(iVar2 + 0x29c) != '\0') && (cVar1 = FUN_004c3114(iVar2,param_2), cVar1 != '\0'))
    {
      return 1;
    }
    if ((((*(int *)(iVar2 + 0x34) != 0) && (iVar3 = FUN_004df914(iVar2,1), iVar3 != 0)) &&
        (iVar2 != iVar3)) &&
       ((*(char *)(iVar3 + 0x29c) != '\0' && (cVar1 = FUN_004c3114(iVar3,param_2), cVar1 != '\0'))))
    {
      return 1;
    }
  }
  uVar4 = FUN_004df7d0(*(undefined4 *)(param_2 + 8));
  if ((*(byte *)(param_1 + 0x51) & 0x10) == 0) {
    local_14[0] = *(short *)(param_2 + 4);
    FUN_00406268(param_1,local_14,uVar4);
    *(short *)(param_2 + 4) = local_14[0];
    if (local_14[0] == 0) {
      return 1;
    }
  }
  return 0;
}
