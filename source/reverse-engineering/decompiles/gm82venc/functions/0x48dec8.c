// rea decompile_all
// name: FUN_0048dec8
// address: 0x48dec8
// body: available
// range: 0x48dec8-0x48dff7 inclusive
// range: 0x48e007-0x48e035 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x48deea (push 0x48e036 followed by fs-segment stack chaining); handler 0x48e036 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x48df08 (push 0x48dff8 followed by fs-segment stack chaining); handler 0x48dff8 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0048dec8(void)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  undefined4 *in_FS_OFFSET;
  int *in_stack_00000004;
  undefined4 in_stack_00000008;
  int in_stack_0000000c;
  int *in_stack_00000010;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 uStack_44;
  undefined1 *puStack_40;
  undefined1 *puStack_3c;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined4 local_20;
  undefined4 local_1c;
  int *local_18;
  int local_14;
  int local_10;
  int local_c;
  undefined4 local_8;

  puStack_30 = &stack0xfffffffc;
  puStack_3c = &stack0xfffffffc;
  local_20 = 0;
  local_1c = 0;
  local_8 = 0;
  puStack_34 = &LAB_0048e036;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  local_18 = (int *)*in_stack_00000004;
  local_14 = in_stack_00000004[1];
  local_10 = in_stack_00000004[2];
  local_c = in_stack_00000004[3];
  puStack_40 = &LAB_0048dff8;
  uStack_44 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_44;
  *in_stack_00000010 = 0;
  puVar1 = &stack0xfffffffc;
  if (local_18 != (int *)0x0) {
    puVar7 = (undefined4 *)0x48df30;
    FUN_00409dfc(&local_8,&DAT_00410758,1,in_stack_0000000c);
    uVar8 = 0x48df41;
    FUN_00404514(in_stack_00000008,local_8,in_stack_0000000c);
    iVar6 = local_c;
    if ((char)local_10 != '\0') {
      if (local_c == 0) {
        puVar7 = &local_1c;
        uVar8 = local_8;
        uVar3 = FUN_004220dc();
        uVar4 = FUN_004221c0();
        FUN_0042141c(&PTR_FUN_00414118,uVar4,uVar3,puVar7,uVar8);
        FUN_00409e44(&local_8,local_1c,&DAT_00410758);
      }
      else {
        piVar5 = (int *)FUN_004221c0();
        uVar8 = 0x48df8d;
        cVar2 = (**(code **)(*piVar5 + -0x2c))(piVar5,iVar6);
        if (cVar2 == '\0') {
          puVar7 = &local_20;
          uVar3 = FUN_004221c0();
          FUN_0042141c(&PTR_FUN_00414118,uVar3,iVar6);
          FUN_00409e44(&local_8,local_20,&DAT_00410758);
        }
      }
    }
    uVar3 = FUN_00409c34(local_8);
    iVar6 = (**(code **)(*local_18 + 8))(local_18,local_14,local_8,uVar3,puVar7,uVar8);
    *in_stack_00000010 = iVar6;
    puVar1 = puStack_3c;
    if (*in_stack_00000010 != in_stack_0000000c) {
      iVar6 = FUN_00409c34(local_8);
      puVar1 = puStack_3c;
      if (iVar6 == *in_stack_00000010) {
        *in_stack_00000010 = in_stack_0000000c;
      }
    }
  }
  puStack_3c = puVar1;
  *in_FS_OFFSET = uStack_44;
  *in_FS_OFFSET = uStack_38;
  puStack_30 = &LAB_0048e03d;
  puStack_34 = (undefined1 *)0x48e027;
  FUN_00409120(&local_20,&DAT_00410758,2);
  puStack_34 = (undefined1 *)0x48e035;
  FUN_00409e08(&local_8,&DAT_00410758);
  return;
}
