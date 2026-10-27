// rea decompile_all
// name: FUN_0064d8bc
// address: 0x64d8bc
// body: available
// range: 0x64d8bc-0x64dabf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x64d8dd (push 0x64dac0 followed by fs-segment stack chaining); handler 0x64dac0 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0064d8bc(undefined4 param_1)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *in_FS_OFFSET;
  float10 in_ST0;
  float10 in_ST1;
  float10 in_ST2;
  float10 in_ST3;
  float10 in_ST4;
  float10 in_ST5;
  float10 in_ST6;
  float10 in_ST7;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 local_18;
  int local_14;
  undefined4 local_10;
  char local_a;
  undefined1 local_9;
  undefined4 local_8;

  puStack_28 = &stack0xfffffffc;
  local_18 = 0;
  puStack_2c = &LAB_0064dac0;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  local_9 = 0;
  local_8 = param_1;
  FUN_0064d820();
  iVar3 = FUN_0052f024(local_8);
  if ((iVar3 == 400) || (iVar3 == 800)) {
    DAT_0077f1c0 = FUN_0052f024(local_8);
    FUN_00409be0(&DAT_0077f1ac,&DAT_0064d734,1,DAT_0077f1c0);
    FUN_00409be0(&DAT_0077f1b0,&DAT_0064d764,1,DAT_0077f1c0);
    FUN_00409be0(&DAT_0077f1b4,&DAT_0064d794,1,DAT_0077f1c0);
    FUN_00409be0(&DAT_0077f1b8,&DAT_0064d7c4,1,DAT_0077f1c0);
    FUN_00409be0(&DAT_0077f1bc,&DAT_0064d7f4,1,DAT_0077f1c0);
    if (-1 < DAT_0077f1c0 + -1) {
      local_14 = DAT_0077f1c0;
      iVar6 = 0;
      do {
        uVar4 = local_8;
        if (799 < iVar3) {
          uVar4 = FUN_0052f2e4(local_8);
        }
        local_a = FUN_0052f114(uVar4);
        *(undefined4 *)(DAT_0077f1ac + iVar6 * 4) = 0;
        *(undefined4 *)(DAT_0077f1b0 + iVar6 * 4) = 0;
        FUN_00407eb8(DAT_0077f1b4 + iVar6 * 4,0);
        *(undefined4 *)(DAT_0077f1bc + iVar6 * 4) = 0xffffffff;
        if (local_a != '\0') {
          FUN_0052f060(uVar4,&local_18);
          FUN_00407eb8(DAT_0077f1b4 + iVar6 * 4,local_18);
          if (799 < iVar3) {
            FUN_0052f038(uVar4);
            *(double *)(DAT_0077f1b8 + iVar6 * 8) = (double)in_ST0;
            in_ST0 = in_ST1;
            in_ST1 = in_ST2;
            in_ST2 = in_ST3;
            in_ST3 = in_ST4;
            in_ST4 = in_ST5;
            in_ST5 = in_ST6;
            in_ST6 = in_ST7;
          }
          uVar5 = FUN_0062dba4(&DAT_0062d408,1);
          *(undefined4 *)(DAT_0077f1ac + iVar6 * 4) = uVar5;
          cVar2 = FUN_0062e260(*(undefined4 *)(DAT_0077f1ac + iVar6 * 4),uVar4);
          if (cVar2 == '\0') goto LAB_0064daaa;
          local_10 = FUN_0062e5e8(*(undefined4 *)(DAT_0077f1ac + iVar6 * 4));
          uVar5 = FUN_005a9c14(local_10);
          *(undefined4 *)(DAT_0077f1bc + iVar6 * 4) = uVar5;
          FUN_00405a7c(local_10);
        }
        if (799 < iVar3) {
          FUN_00405a7c(uVar4);
        }
        iVar6 = iVar6 + 1;
        local_14 = local_14 + -1;
      } while (local_14 != 0);
    }
    DAT_0078a168 = 0;
    local_9 = 1;
  }
LAB_0064daaa:
  puVar1 = puStack_28;
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_0064dac7;
  puStack_2c = (undefined1 *)0x64dabf;
  thunk_FUN_00406e5c(&local_18,uStack_30,puVar1);
  return;
}
