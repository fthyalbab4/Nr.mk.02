// rea decompile_all
// name: FUN_0055c158
// address: 0x55c158
// body: available
// range: 0x55c158-0x55c238 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0055c158(int *param_1,int param_2)

{
  ushort uVar1;
  ushort *puVar2;
  ushort *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int *piStack_14;

  puVar2 = (ushort *)param_1[param_2 + 0x11];
  if (puVar2 == (ushort *)0x0) {
    iVar5 = *param_1;
    *(undefined4 *)(iVar5 + 0x14) = 0x34;
    *(int *)(iVar5 + 0x18) = param_2;
    (**(code **)*param_1)();
  }
  iVar6 = 0;
  iVar5 = 0;
  puVar3 = puVar2;
  do {
    if (0xff < *puVar3) {
      iVar6 = 1;
    }
    iVar5 = iVar5 + 1;
    puVar3 = puVar3 + 1;
  } while (iVar5 < 0x40);
  if (*(int *)(puVar2 + 0x40) == 0) {
    FUN_0055c10c(param_1,0xdb);
    if (iVar6 == 0) {
      uVar4 = 0x43;
    }
    else {
      uVar4 = 0x83;
    }
    FUN_0055c12c(param_1,uVar4);
    FUN_0055c0dc(param_1,iVar6 * 0x10 + param_2);
    piStack_14 = &DAT_0077ba60;
    iVar5 = 0;
    do {
      uVar1 = puVar2[*piStack_14];
      if (iVar6 != 0) {
        FUN_0055c0dc(param_1,uVar1 >> 8);
      }
      FUN_0055c0dc(param_1,uVar1 & 0xff);
      iVar5 = iVar5 + 1;
      piStack_14 = piStack_14 + 1;
    } while (iVar5 < 0x40);
    puVar2[0x40] = 1;
    puVar2[0x41] = 0;
  }
  return iVar6;
}
