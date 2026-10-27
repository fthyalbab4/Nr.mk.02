// rea decompile_all
// name: FUN_0054c704
// address: 0x54c704
// body: available
// range: 0x54c704-0x54c832 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0054c704(undefined4 param_1,int *param_2,undefined4 param_3)

{
  short sVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;

  FUN_00408194(param_2,param_1,param_3,param_3);
  iVar3 = 0;
  if (*param_2 != 0) {
    iVar3 = *(int *)(*param_2 + -4);
  }
  if (iVar3 < 2) {
    return;
  }
  sVar1 = *(short *)(*param_2 + -2 + iVar3 * 2);
  if ((sVar1 != 0x41) && (sVar1 != 0x57)) {
    return;
  }
  uVar4 = (uint)*(ushort *)(*param_2 + -4 + iVar3 * 2);
  if (uVar4 < 0x37f) {
    if (uVar4 < 0xb8) {
      if ((((uVar4 == 0xb7) || (uVar4 - 0x30 < 10)) || (uVar4 - 0x41 < 0x1a)) ||
         ((uVar4 == 0x5f || (uVar4 - 0x61 < 0x1a)))) {
LAB_0054c818:
        bVar2 = true;
        goto LAB_0054c81e;
      }
    }
    else if (((uVar4 - 0xc0 < 0x17) || (uVar4 - 0xd8 < 0x1f)) || (uVar4 - 0xf8 < 0x286))
    goto LAB_0054c818;
  }
  else if (uVar4 < 0x2c00) {
    if (((uVar4 - 0x37f < 0x1c81) || (uVar4 - 0x200c < 2)) ||
       ((uVar4 - 0x203f < 2 || (uVar4 - 0x2070 < 0x120)))) goto LAB_0054c818;
  }
  else if ((((uVar4 - 0x2c00 < 0x3f0) || (uVar4 - 0x3001 < 0xa7ff)) || (uVar4 - 0xf900 < 0x4d0)) ||
          (uVar4 - 0xfdf0 < 0x20e)) goto LAB_0054c818;
  bVar2 = false;
LAB_0054c81e:
  if (bVar2) {
    FUN_00408a54(param_2,iVar3,1);
  }
  return;
}
