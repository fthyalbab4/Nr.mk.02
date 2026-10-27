// rea decompile_all
// name: FUN_0047eb74
// address: 0x47eb74
// body: available
// range: 0x47eb74-0x47ecae inclusive
// range: 0x47ecf2-0x47ecfa inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x47ec75 (push 0x47ecaf followed by fs-segment stack chaining); handler 0x47ecaf lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0047eb74(int param_1,int *param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int *in_FS_OFFSET;
  int iStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;

  if ((*(char *)(param_1 + 0x399) == '\0') && (*(char *)(param_1 + 0x398) != '\0')) {
    puStack_30 = (undefined1 *)0x47ebb0;
    iVar6 = FUN_004c2d00(param_1);
    if ((iVar6 != 0) &&
       ((*param_2 != *(int *)(param_1 + 0x48) || (*param_3 != *(int *)(param_1 + 0x4c))))) {
      iVar6 = *param_2;
      iVar8 = *param_3;
      cVar1 = *(char *)(param_1 + 0x398);
      if (cVar1 != '\0') {
        if (cVar1 == '\x01') {
          iVar8 = iVar8 + *(int *)(param_1 + 0x390);
        }
        else {
          if (cVar1 != '\x02') {
            return 0;
          }
          iVar6 = iVar6 + *(int *)(param_1 + 0x394);
        }
        *(undefined4 *)(param_1 + 0x388) = *(undefined4 *)(param_1 + 0x48);
        *(undefined4 *)(param_1 + 0x38c) = *(undefined4 *)(param_1 + 0x4c);
        puStack_30 = (undefined1 *)0x47ec3f;
        piVar7 = (int *)FUN_004c2d14(param_1,0);
        iVar2 = *(int *)(param_1 + 0x48);
        iVar3 = piVar7[0x12];
        iVar4 = *(int *)(param_1 + 0x4c);
        iVar5 = piVar7[0x13];
        *(undefined1 *)(param_1 + 0x399) = 1;
        puStack_34 = &LAB_0047ecaf;
        iStack_38 = *in_FS_OFFSET;
        *in_FS_OFFSET = (int)&iStack_38;
        iVar8 = iVar8 - (iVar4 - iVar5);
        puStack_30 = &stack0xfffffffc;
        (**(code **)(*piVar7 + 0x98))
                  (piVar7,piVar7[0x10],piVar7[0x11],iVar8,iVar6 - (iVar2 - iVar3));
        *in_FS_OFFSET = iVar8;
        *(undefined1 *)(param_1 + 0x399) = 0;
        return param_1;
      }
    }
  }
  return 1;
}
