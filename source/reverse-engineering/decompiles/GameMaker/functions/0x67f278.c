// rea decompile_all
// name: FUN_0067f278
// address: 0x67f278
// body: available
// range: 0x67f278-0x67f324 inclusive
// range: 0x67f32c-0x67f399 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x67f2cf (push 0x67f325 followed by fs-segment stack chaining); handler 0x67f325 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0067f278(int param_1)

{
  int iVar1;
  undefined1 *puVar2;
  char cVar3;
  int *piVar4;
  int *in_FS_OFFSET;
  int iStack_18;
  undefined1 *puStack_14;
  wchar_t *pwStack_10;

  pwStack_10 = L"뮀ʄ";
  FUN_004fa3a4(param_1);
  if ((*(char *)(param_1 + 0x284) == '\0') && (*(int *)(*(int *)(param_1 + 0x278) + 0xc) != 0)) {
    pwStack_10 =
    L"삄睵Ʋ\xf8a1䕳\xe800ɿ￞䖉㏼嗀╨柳搀ヿ襤謠碃\x02謀౐䖋诼（ࡑ뮀ʔ";
    cVar3 = (**(code **)(**(int **)(*(int *)(param_1 + 0x278) + 0xc) + 0x20))();
    if (cVar3 == '\0') {
      pwStack_10 = L"䖉㏼嗀╨柳搀ヿ襤謠碃\x02謀౐䖋诼（ࡑ뮀ʔ";
      piVar4 = (int *)FUN_0045f540(&PTR_LAB_00457450,1);
      puStack_14 = &LAB_0067f325;
      iStack_18 = *in_FS_OFFSET;
      *in_FS_OFFSET = (int)&iStack_18;
      pwStack_10 = (wchar_t *)&stack0xfffffffc;
      (**(code **)(*piVar4 + 8))(piVar4,*(undefined4 *)(*(int *)(param_1 + 0x278) + 0xc));
      if (*(char *)(param_1 + 0x294) != '\0') {
        (**(code **)(*(int *)piVar4[3] + 0x40))((int *)piVar4[3],1);
      }
      iVar1 = piVar4[3];
      (**(code **)(**(int **)(param_1 + 0x270) + 0x3c))(*(int **)(param_1 + 0x270),0,0);
      puVar2 = puStack_14;
      *in_FS_OFFSET = iVar1;
      puStack_14 = (undefined1 *)0x67f396;
      iStack_18 = 0x67f324;
      FUN_00405a7c(piVar4,iVar1,puVar2);
      return;
    }
  }
  if ((*(char *)(param_1 + 0x284) == '\x02') || (*(char *)(param_1 + 0x284) == '\x01')) {
    pwStack_10 = L"삄䱵莋ʀ";
    cVar3 = (**(code **)(**(int **)(param_1 + 0x280) + 0x20))();
    if (cVar3 == '\0') {
      pwStack_10 = L"莋ʀ";
      (**(code **)(**(int **)(param_1 + 0x280) + 0x40))(*(int **)(param_1 + 0x280),1);
      pwStack_10 = *(wchar_t **)(param_1 + 0x280);
      puStack_14 = (undefined1 *)0x67f36d;
      (**(code **)(**(int **)(param_1 + 0x270) + 0x3c))(*(int **)(param_1 + 0x270),0,0);
    }
  }
  else {
    pwStack_10 = L"ꡨ柳謀炃\x02㌀㏉诒８袓";
    FUN_0045bda4(*(undefined4 *)(*(int *)(param_1 + 0x270) + 0x48),1);
    pwStack_10 = L"SUseTheGlyphProperty";
    puStack_14 = (undefined1 *)0x67f396;
    (**(code **)(**(int **)(param_1 + 0x270) + 0x88))(*(int **)(param_1 + 0x270),0,0);
  }
  return;
}
