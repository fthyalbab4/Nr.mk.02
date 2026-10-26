// rea decompile_all
// name: FUN_004df1b8
// address: 0x4df1b8
// body: available
// range: 0x4df1b8-0x4df2d1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004df1b8(undefined4 param_1,int *param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  int local_18;

  FUN_00407eb8(param_2,param_1);
  for (iVar3 = 1; iVar2 = FUN_00408238(*param_2), iVar3 <= iVar2; iVar3 = iVar3 + 1) {
    uVar1 = *(ushort *)(*param_2 + -2 + iVar3 * 2);
    if ((uVar1 < 0xd800) || (0xdfff < uVar1)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      iVar3 = iVar3 + 1;
    }
    else if (*(short *)(*param_2 + -2 + iVar3 * 2) == 0x26) {
      if (PTR_DAT_00782974[0xc] == '\0') {
        bVar4 = false;
      }
      else {
        if (iVar3 < 2) {
          bVar4 = false;
        }
        else {
          local_18 = *param_2;
          if (local_18 != 0) {
            local_18 = *(int *)(local_18 + -4);
          }
          bVar4 = 1 < local_18 - iVar3;
        }
        if (bVar4) {
          bVar4 = *(short *)(*param_2 + -4 + iVar3 * 2) == 0x28;
        }
        else {
          bVar4 = false;
        }
        if (bVar4) {
          bVar4 = *(short *)(*param_2 + 2 + iVar3 * 2) == 0x29;
        }
        else {
          bVar4 = false;
        }
      }
      if (bVar4) {
        FUN_00408778(param_2,iVar3 + -1,4);
      }
      else {
        FUN_00408778(param_2,iVar3,1);
      }
    }
  }
  return;
}
