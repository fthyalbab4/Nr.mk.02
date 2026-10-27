// rea decompile_all
// name: FUN_00560168
// address: 0x560168
// body: available
// range: 0x560168-0x560225 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00560168(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  bool bVar6;
  int local_24;
  int local_20 [4];

  iVar1 = *(int *)(param_1 + 0x168);
  FUN_0055fa64(iVar1);
  bVar6 = *(int *)(param_1 + 0x138) != 0;
  FUN_0054e1d0();
  local_24 = 0;
  piVar4 = (int *)(param_1 + 0xf4);
  do {
    if (*(int *)(param_1 + 0xf0) <= local_24) {
      return;
    }
    if (bVar6) {
      iVar3 = *(int *)(*piVar4 + 0x18);
LAB_005601cd:
      if (local_20[iVar3] == 0) {
        if (bVar6) {
          piVar5 = (int *)(param_1 + 100 + iVar3 * 4);
        }
        else {
          piVar5 = (int *)(param_1 + 0x54 + iVar3 * 4);
        }
        if (*piVar5 == 0) {
          iVar2 = FUN_0055b008(param_1);
          *piVar5 = iVar2;
        }
        FUN_005611a4(param_1,*piVar5,*(undefined4 *)(iVar1 + 0x5c + iVar3 * 4));
        local_20[iVar3] = 1;
      }
    }
    else if (*(int *)(param_1 + 0x140) == 0) {
      iVar3 = *(int *)(*piVar4 + 0x14);
      goto LAB_005601cd;
    }
    local_24 = local_24 + 1;
    piVar4 = piVar4 + 1;
  } while( true );
}
