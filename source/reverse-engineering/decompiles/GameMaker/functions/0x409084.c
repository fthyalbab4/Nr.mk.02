// rea decompile_all
// name: FUN_00409084
// address: 0x409084
// body: available
// range: 0x409084-0x4091c2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4090fb to 0x404478 FUN_00404478 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00409084(int param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;

  puVar8 = (undefined4 *)(*(byte *)(param_3 + 1) + 10 + param_3);
  iVar7 = puVar8[-1];
  iVar5 = 0;
  iVar2 = puVar8[-2];
  do {
    if (iVar7 == 0) {
      if (iVar5 < iVar2) {
        FUN_0040450c(iVar5 + param_2,iVar5 + param_1);
      }
      return;
    }
    if (iVar5 < (int)puVar8[1]) {
      FUN_0040450c(iVar5 + param_2,iVar5 + param_1);
    }
    iVar3 = puVar8[1];
    pcVar4 = *(char **)*puVar8;
    cVar1 = *pcVar4;
    if (cVar1 == '\n') {
      FUN_00406eb0(iVar3 + param_1,*(undefined4 *)(iVar3 + param_2));
      iVar5 = 4;
    }
    else if (cVar1 == '\v') {
      FUN_00407ab4(iVar3 + param_1,*(undefined4 *)(iVar3 + param_2));
      iVar5 = 4;
    }
    else if (cVar1 == '\x12') {
      FUN_00407eb8(iVar3 + param_1,*(undefined4 *)(iVar3 + param_2));
      iVar5 = 4;
    }
    else if (cVar1 == '\f') {
      FUN_0040906c(iVar3 + param_1,iVar3 + param_2);
      iVar5 = 0x10;
    }
    else if (cVar1 == '\r') {
      uVar6 = (uint)(byte)pcVar4[1];
      iVar5 = *(int *)(pcVar4 + uVar6 + 2);
      FUN_004091c4(iVar3 + param_1,iVar3 + param_2,**(undefined4 **)(pcVar4 + uVar6 + 10),
                   *(undefined4 *)(pcVar4 + uVar6 + 6));
    }
    else if (cVar1 == '\x0e') {
      iVar5 = *(int *)(pcVar4 + (byte)pcVar4[1] + 2);
      FUN_00409084(iVar3 + param_1,iVar3 + param_2,pcVar4);
    }
    else if (cVar1 == '\x0f') {
      FUN_0040b158(iVar3 + param_1,*(undefined4 *)(iVar3 + param_2));
      iVar5 = 4;
    }
    else {
      if (cVar1 != '\x11') {
        FUN_00404478(CONCAT31((int3)((uint)iVar3 >> 8),2));
        return;
      }
      FUN_00409d1c(iVar3 + param_1,*(undefined4 *)(iVar3 + param_2),pcVar4);
      iVar5 = 4;
    }
    iVar5 = iVar5 + puVar8[1];
    puVar8 = puVar8 + 2;
    iVar7 = iVar7 + -1;
  } while( true );
}
