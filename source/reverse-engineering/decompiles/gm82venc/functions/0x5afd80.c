// rea decompile_all
// name: FUN_005afd80
// address: 0x5afd80
// body: available
// range: 0x5afd80-0x5afe5a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005afd80(int *param_1,int param_2,int param_3)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  int local_1c;
  byte *pbStack_18;
  byte *pbStack_14;

  if (param_3 == 0) {
    pbVar4 = (byte *)param_1[param_2 + 0x15];
    local_1c = param_2;
  }
  else {
    pbVar4 = (byte *)param_1[param_2 + 0x19];
    local_1c = param_2 + 0x10;
  }
  if (pbVar4 == (byte *)0x0) {
    iVar2 = *param_1;
    *(undefined4 *)(iVar2 + 0x14) = 0x32;
    *(int *)(iVar2 + 0x18) = local_1c;
    (**(code **)*param_1)();
  }
  if (*(int *)(pbVar4 + 0x114) == 0) {
    FUN_005afc50(param_1,0xc4);
    iVar3 = 0;
    iVar2 = 1;
    pbVar1 = pbVar4;
    do {
      pbVar1 = pbVar1 + 1;
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + (uint)*pbVar1;
    } while (iVar2 < 0x11);
    FUN_005afc70(param_1,iVar3 + 0x13);
    FUN_005afc20(param_1,local_1c);
    iVar2 = 1;
    pbStack_18 = pbVar4;
    do {
      pbStack_18 = pbStack_18 + 1;
      FUN_005afc20(param_1,*pbStack_18);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x11);
    iVar2 = 0;
    pbStack_14 = pbVar4 + 0x11;
    if (0 < iVar3) {
      do {
        FUN_005afc20(param_1,*pbStack_14);
        iVar2 = iVar2 + 1;
        pbStack_14 = pbStack_14 + 1;
      } while (iVar2 < iVar3);
    }
    pbVar4[0x114] = 1;
    pbVar4[0x115] = 0;
    pbVar4[0x116] = 0;
    pbVar4[0x117] = 0;
  }
  return;
}
