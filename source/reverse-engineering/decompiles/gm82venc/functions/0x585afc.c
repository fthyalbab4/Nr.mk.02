// rea decompile_all
// name: FUN_00585afc
// address: 0x585afc
// body: available
// range: 0x585afc-0x585cac inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x585b3f (push 0x585cad followed by fs-segment stack chaining); handler 0x585cad lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00585afc(void)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int *in_FS_OFFSET;
  undefined4 uVar7;
  undefined1 *puStack_1cc;
  undefined1 *puStack_1c8;
  undefined1 *puStack_1c4;
  undefined4 local_1b4;
  int local_1b0;
  int local_1ac;
  int local_1a8;
  int local_1a4;
  undefined1 local_19d;
  undefined1 local_19c [384];
  undefined1 local_1c [24];

  local_1b4 = 0;
  puStack_1c4 = (undefined1 *)0x585b26;
  FUN_0040902c(local_19c,&DAT_00615f70,0x10);
  puStack_1c4 = (undefined1 *)0x585b34;
  FUN_00408ff8(local_1c,&DAT_00615f70);
  puStack_1c8 = &LAB_00585cad;
  puStack_1cc = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&puStack_1cc;
  local_19d = 0;
  puStack_1c4 = &stack0xfffffffc;
  if (-1 < DAT_00686b0c + -1) {
    local_1ac = DAT_00686b0c;
    local_1a4 = 0;
    puStack_1c4 = &stack0xfffffffc;
    do {
      local_1b0 = *(int *)(DAT_00686b08 + local_1a4 * 4);
      iVar5 = *(int *)(local_1b0 + 0x10);
      if (-1 < iVar5 + -1) {
        iVar6 = 0;
        do {
          iVar3 = FUN_005754b0(local_1b0,iVar6);
          if (*(int *)(iVar3 + 0xc) != 0) {
            if (*PTR_PTR_0068909c != '\0') {
              FUN_006113b0(&PTR_DAT_00585cd0,1);
              goto LAB_00585c70;
            }
            local_1a8 = FUN_005750f4(iVar3,*(undefined4 *)(iVar3 + 0xc));
            if (local_1a8 == 0) {
              FUN_00408678(&local_1b4,L"Could not locate initialization function ",
                           *(undefined4 *)(iVar3 + 0xc));
              FUN_006113b0(local_1b4,1);
              goto LAB_00585c70;
            }
            uVar7 = 0;
            uVar4 = FUN_0060d2cc(&DAT_0060b63c,1,0,0,0,0,0,0);
            puStack_1cc = local_1c;
            cVar2 = FUN_00586134(*(undefined4 *)(local_1a8 + 0x10),uVar4,uVar4,uVar7,0xf,local_19c,0
                                );
            if (cVar2 == '\0') {
              FUN_006113b0(*(undefined4 *)PTR_DAT_00689674,1);
              goto LAB_00585c70;
            }
          }
          iVar6 = iVar6 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      local_1a4 = local_1a4 + 1;
      local_1ac = local_1ac + -1;
    } while (local_1ac != 0);
  }
  local_19d = 1;
LAB_00585c70:
  puVar1 = puStack_1c4;
  *in_FS_OFFSET = (int)puStack_1cc;
  puStack_1c4 = &LAB_00585cb4;
  puStack_1c8 = (undefined1 *)0x585c88;
  thunk_FUN_004072d8(&local_1b4,puStack_1cc,puVar1);
  puStack_1c8 = (undefined1 *)0x585c9e;
  FUN_00409120(local_19c,&DAT_00615f70,0x10);
  puStack_1c8 = (undefined1 *)0x585cac;
  FUN_004090d0(local_1c,&DAT_00615f70);
  return;
}
