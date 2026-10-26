// rea decompile_all
// name: FUN_0056bb98
// address: 0x56bb98
// body: available
// range: 0x56bb98-0x56bda0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x56bbc3 (push 0x56bda1 followed by fs-segment stack chaining); handler 0x56bda1 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0056bb98(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  char cVar1;
  uint uVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_50;
  undefined1 *puStack_4c;
  undefined1 *puStack_48;
  int local_28;
  int local_24;
  int local_18;
  int local_14;
  int *local_c;
  undefined4 local_8;

  puStack_48 = &stack0xfffffffc;
  local_8 = 0;
  local_c = (int *)0x0;
  puStack_4c = &LAB_0056bda1;
  uStack_50 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_50;
  if (*(int *)PTR_DAT_00689570 != 0) {
    cVar1 = FUN_0056b4d0(param_1);
    if (cVar1 != '\0') {
      local_14 = param_2;
      if (param_2 < 0) {
        local_14 = 0;
      }
      local_18 = param_3;
      if (param_3 < 0) {
        local_18 = 0;
      }
      if (*(int *)(DAT_0084527c + 4 + param_1 * 0x14) < local_14 + param_5) {
        param_5 = *(int *)(DAT_0084527c + 4 + param_1 * 0x14) - local_14;
      }
      if (*(int *)(DAT_0084527c + 8 + param_1 * 0x14) < local_18 + param_4) {
        param_4 = *(int *)(DAT_0084527c + 8 + param_1 * 0x14) - local_18;
      }
      if ((0 < param_5) && (0 < param_4)) {
        FUN_0040b268(&local_c);
        uVar2 = (**(code **)(**(int **)PTR_DAT_00689570 + 0x6c))();
        if ((uVar2 & 0x80000000) == 0) {
          FUN_006212f8(*(undefined4 *)(DAT_0084527c + param_1 * 0x14),&local_8);
          uVar2 = (**(code **)(**(int **)PTR_DAT_00689570 + 0x70))();
          if ((uVar2 & 0x80000000) == 0) {
            uVar2 = (**(code **)(*local_c + 0x24))();
            if ((uVar2 & 0x80000000) == 0) {
              piVar3 = (int *)FUN_00462804(&PTR_FUN_00458e94,1);
              (**(code **)(*piVar3 + 0x44))(piVar3,param_5);
              (**(code **)(*piVar3 + 0x38))(piVar3,param_4);
              FUN_00464480(piVar3,7);
              if (-1 < param_4 + -1) {
                iVar5 = 0;
                do {
                  uVar4 = FUN_004632a8(piVar3,iVar5);
                  FUN_00404514(iVar5 * local_28 + local_24,uVar4,local_28);
                  iVar5 = iVar5 + 1;
                  param_4 = param_4 + -1;
                } while (param_4 != 0);
              }
              (**(code **)(*local_c + 0x28))();
              FUN_0040b268(&local_c);
            }
          }
        }
      }
    }
  }
  *in_FS_OFFSET = uStack_50;
  puStack_48 = &LAB_0056bda8;
  puStack_4c = (undefined1 *)0x56bda0;
  FUN_00409120(&local_c,&LAB_00510f7c,2);
  return;
}
