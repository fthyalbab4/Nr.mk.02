// rea decompile_all
// name: FUN_0056e710
// address: 0x56e710
// body: available
// range: 0x56e710-0x56e824 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x56e737 (push 0x56e842 followed by fs-segment stack chaining); handler 0x56e842 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x56e786 (push 0x56e825 followed by fs-segment stack chaining); handler 0x56e825 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0056e710(int param_1,int param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  char cVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;

  puStack_1c = (undefined1 *)0x56e729;
  piVar4 = (int *)FUN_0045b6a8(&PTR_FUN_00454d50,1);
  puStack_20 = &LAB_0056e842;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  piVar1 = *(int **)(param_1 + 0x270);
  puStack_28 = (undefined1 *)0x56e751;
  puStack_1c = &stack0xfffffffc;
  (**(code **)(*piVar4 + 8))(piVar4,piVar1[0x11]);
  puStack_28 = (undefined1 *)0x56e75e;
  FUN_0045b96c(piVar1[0x11],2);
  puStack_28 = (undefined1 *)0x56e76b;
  FUN_0045b954(piVar1[0x11],0xe);
  puStack_28 = (undefined1 *)0x56e77b;
  FUN_0045b9a4(piVar1[0x11],1);
  puStack_2c = &LAB_0056e825;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  if (*(char *)(param_1 + 0x318) == '\x02') {
    puStack_28 = &stack0xfffffffc;
    cVar3 = FUN_00405d08(param_1);
    if (cVar3 == '\0') {
      (**(code **)(*piVar1 + 0x5c))(piVar1,0,*(undefined4 *)(param_1 + 0x2d4));
      (**(code **)(*piVar1 + 0x58))
                (piVar1,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_1 + 0x2d4));
    }
    else {
      (**(code **)(*piVar1 + 0x5c))
                (piVar1,*(undefined4 *)(param_2 + 0xc),*(undefined4 *)(param_1 + 0x2d4));
      (**(code **)(*piVar1 + 0x58))
                (piVar1,*(int *)(param_2 + 0xc) - *(int *)(param_2 + 8),
                 *(undefined4 *)(param_1 + 0x2d4));
    }
  }
  else {
    puStack_28 = &stack0xfffffffc;
    (**(code **)(*piVar1 + 0x5c))(piVar1,*(undefined4 *)(param_1 + 0x2d4),0);
    (**(code **)(*piVar1 + 0x58))
              (piVar1,*(undefined4 *)(param_1 + 0x2d4),*(undefined4 *)(param_2 + 0x38));
  }
  puVar2 = puStack_28;
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_0056e82c;
  puStack_2c = (undefined1 *)0x56e824;
  FUN_0045cd30(piVar1,piVar4,puVar2);
  return;
}
