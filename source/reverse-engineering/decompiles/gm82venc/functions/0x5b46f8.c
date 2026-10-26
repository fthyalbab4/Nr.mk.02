// rea decompile_all
// name: FUN_005b46f8
// address: 0x5b46f8
// body: available
// range: 0x5b46f8-0x5b479c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005b46f8(int *param_1,uint param_2,int param_3)

{
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;

  iVar4 = param_1[3];
  if (param_3 == 0) {
    piVar1 = (int *)param_1[8];
    *(undefined4 *)(*piVar1 + 0x14) = 0x28;
    (**(code **)*piVar1)();
  }
  iVar4 = iVar4 + param_3;
  uVar5 = (param_2 & (1 << ((byte)param_3 & 0x1f)) - 1U) << (0x18U - (char)iVar4 & 0x1f) |
          param_1[2];
  while( true ) {
    if (iVar4 < 8) {
      param_1[2] = uVar5;
      param_1[3] = iVar4;
      return 1;
    }
    puVar2 = (undefined1 *)*param_1;
    *param_1 = *param_1 + 1;
    *puVar2 = (char)(uVar5 >> 0x10);
    piVar1 = param_1 + 1;
    *piVar1 = *piVar1 + -1;
    if ((*piVar1 == 0) && (iVar3 = FUN_005b46d0(param_1), iVar3 == 0)) break;
    if (((int)uVar5 >> 0x10 & 0xffU) == 0xff) {
      puVar2 = (undefined1 *)*param_1;
      *param_1 = *param_1 + 1;
      *puVar2 = 0;
      piVar1 = param_1 + 1;
      *piVar1 = *piVar1 + -1;
      if ((*piVar1 == 0) && (iVar3 = FUN_005b46d0(param_1), iVar3 == 0)) {
        return 0;
      }
    }
    uVar5 = uVar5 << 8;
    iVar4 = iVar4 + -8;
  }
  return 0;
}
